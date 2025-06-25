function [ simulationInfo ] = Postprocess_FullThrottle( simulationInfo, EvaluationAtSpeeds )

max_length = 5; % max_length is the maximal length for speed vector
te = '12345'; % string for comment

res_file = simulationInfo.SimulationInfo.ResultFile;
res = vm_results([],[],res_file);

eval_speeds = EvaluationAtSpeeds.v; % speed in km/h
sim_time = res.Task.SimulationTime.v;
speed = res.Vehicle.Chassis.VehicleBody.Vel_wrt_WorldSysVehSys.signal_1.v;

len_table = min(length(eval_speeds),max_length); 
time(1:max_length) = 0;

for k=1:len_table
    found_speed = find(speed>eval_speeds(k)/3.6,1,'first'); 
	if ~isempty(found_speed)
		time(k)      = sim_time(found_speed);
    else
        len_table = k-1; % assuming acceleration
        break;
	end;	
end;

% merging of the additional evaluations
merge_data = {};
merge_varname = {};
merge_comment = {};
merge_unit = {};

for k=1:len_table
    merge_data = [merge_data, {[0 time(k) time(k)], [eval_speeds(k)/3.6 eval_speeds(k)/3.6 0]}]; % speed in m/s
    merge_data{2*k-1}(4:length(res.Task.SimulationTime.v)) = merge_data{2*k-1}(3); % add dummy values to avoid warning from dm_plot_gui_callback
    merge_data{2*k}(4:length(res.Task.SimulationTime.v)) = merge_data{2*k}(3);
    merge_varname = [merge_varname, {['time' te(k)],['speed' te(k)]}];
    merge_comment = [merge_comment, {['time needed to achieve ' te(k) '. speed value'], [te(k) '. speed value']}];
    merge_unit = [merge_unit, {'s', 'm'}];
end


vm_merge_results(res_file, 'additional_evaluations', merge_varname, merge_data, merge_comment, merge_unit);

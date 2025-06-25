function [ simulationInfo ] = Postprocess_HandlingCourse( simulationInfo )

res_file = simulationInfo.SimulationInfo.ResultFile;
res = vm_results([],[],res_file);





"use strict";

let GetLoadedProgram = require('./GetLoadedProgram.js')
let IsInRemoteControl = require('./IsInRemoteControl.js')
let Load = require('./Load.js')
let GetSafetyMode = require('./GetSafetyMode.js')
let RawRequest = require('./RawRequest.js')
let Popup = require('./Popup.js')
let IsProgramSaved = require('./IsProgramSaved.js')
let GetProgramState = require('./GetProgramState.js')
let AddToLog = require('./AddToLog.js')
let GetRobotMode = require('./GetRobotMode.js')
let IsProgramRunning = require('./IsProgramRunning.js')

module.exports = {
  GetLoadedProgram: GetLoadedProgram,
  IsInRemoteControl: IsInRemoteControl,
  Load: Load,
  GetSafetyMode: GetSafetyMode,
  RawRequest: RawRequest,
  Popup: Popup,
  IsProgramSaved: IsProgramSaved,
  GetProgramState: GetProgramState,
  AddToLog: AddToLog,
  GetRobotMode: GetRobotMode,
  IsProgramRunning: IsProgramRunning,
};

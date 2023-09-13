
"use strict";

let Digital = require('./Digital.js');
let Analog = require('./Analog.js');
let IOStates = require('./IOStates.js');
let ToolDataMsg = require('./ToolDataMsg.js');
let RobotStateRTMsg = require('./RobotStateRTMsg.js');
let RobotModeDataMsg = require('./RobotModeDataMsg.js');
let MasterboardDataMsg = require('./MasterboardDataMsg.js');

module.exports = {
  Digital: Digital,
  Analog: Analog,
  IOStates: IOStates,
  ToolDataMsg: ToolDataMsg,
  RobotStateRTMsg: RobotStateRTMsg,
  RobotModeDataMsg: RobotModeDataMsg,
  MasterboardDataMsg: MasterboardDataMsg,
};

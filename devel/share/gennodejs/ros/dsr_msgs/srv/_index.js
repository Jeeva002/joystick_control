
"use strict";

let SetVelJRT = require('./SetVelJRT.js')
let SetAccXRT = require('./SetAccXRT.js')
let GetRTControlInputDataList = require('./GetRTControlInputDataList.js')
let GetRTControlOutputDataList = require('./GetRTControlOutputDataList.js')
let ConnectRTControl = require('./ConnectRTControl.js')
let DisconnectRTControl = require('./DisconnectRTControl.js')
let WriteDataRT = require('./WriteDataRT.js')
let StopRTControl = require('./StopRTControl.js')
let ReadDataRT = require('./ReadDataRT.js')
let StartRTControl = require('./StartRTControl.js')
let SetRTControlOutput = require('./SetRTControlOutput.js')
let GetRTControlOutputVersionList = require('./GetRTControlOutputVersionList.js')
let SetRTControlInput = require('./SetRTControlInput.js')
let SetAccJRT = require('./SetAccJRT.js')
let GetRTControlInputVersionList = require('./GetRTControlInputVersionList.js')
let SetVelXRT = require('./SetVelXRT.js')

module.exports = {
  SetVelJRT: SetVelJRT,
  SetAccXRT: SetAccXRT,
  GetRTControlInputDataList: GetRTControlInputDataList,
  GetRTControlOutputDataList: GetRTControlOutputDataList,
  ConnectRTControl: ConnectRTControl,
  DisconnectRTControl: DisconnectRTControl,
  WriteDataRT: WriteDataRT,
  StopRTControl: StopRTControl,
  ReadDataRT: ReadDataRT,
  StartRTControl: StartRTControl,
  SetRTControlOutput: SetRTControlOutput,
  GetRTControlOutputVersionList: GetRTControlOutputVersionList,
  SetRTControlInput: SetRTControlInput,
  SetAccJRT: SetAccJRT,
  GetRTControlInputVersionList: GetRTControlInputVersionList,
  SetVelXRT: SetVelXRT,
};

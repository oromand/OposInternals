//*************************************************************************
//** OPOS PINPad SO Interface
//*************************************************************************

[
    uuid(CCBE0130-B81E-11D2-AB74-0040054C3719),
    helpstring("IOPOSPINPadSO 1.14.1 Interface")
]
dispinterface IOPOSPINPadSO
{
    properties:
    methods:
        // Device Common Method
        [id(1)] LONG GetPropertyNumber([in] LONG PropIndex);
        [id(2)] void SetPropertyNumber([in] LONG PropIndex, [in] LONG Number);
        [id(3)] BSTR GetPropertyString([in] LONG PropIndex);
        [id(4)] void SetPropertyString([in] LONG PropIndex, [in] BSTR String);
        [id(5)] LONG OpenService([in] BSTR DeviceClass, [in] BSTR DeviceName, [in] IDispatch* pDispatch);
        [id(6)] LONG CloseService(void);
        [id(7)] LONG ClaimDevice([in] LONG Timeout);
        [id(8)] LONG ReleaseDevice(void);
        [id(9)] LONG CheckHealth([in] LONG Level);
        [id(10)] LONG ClearInput(void);
        [id(11)] LONG ClearInputProperties(void);
     // [id(12)] LONG ClearOutput(void);
        [id(13)] LONG DirectIO([in] LONG Command, [in, out] LONG* pData, [in, out] BSTR* pString);
        [id(14)] LONG CompareFirmwareVersion([in] BSTR FirmwareFileName, [out] LONG* pResult);
        [id(15)] LONG UpdateFirmware([in] BSTR FirmwareFileName);
        [id(16)] LONG ResetStatistics([in] BSTR StatisticsBuffer);
        [id(17)] LONG RetrieveStatistics([in, out] BSTR* pStatisticsBuffer);
        [id(18)] LONG UpdateStatistics([in] BSTR StatisticsBuffer);
        [id(19)] LONG COFreezeEvents([in] VARIANT_BOOL Freeze);
        [id(20)] LONG GetOpenResult(void);

        // Device Specific Property
        [id(49)] CURRENCY GetAmount(void);
        [id(50)] void SetAmount([in] CURRENCY Amount);

        // Device Specific Method
        [id(81)] LONG BeginEFTTransaction([in] BSTR PINPadSystem, [in] LONG TransactionHost);
        [id(82)] LONG ComputeMAC([in] BSTR InMsg, [out] BSTR* pOutMsg);
        [id(83)] LONG EnablePINEntry(void);
        [id(84)] LONG EndEFTTransaction([in] LONG CompletionCode);
        [id(85)] LONG UpdateKey([in] LONG KeyNum, [in] BSTR Key);
        [id(86)] LONG VerifyMAC([in] BSTR Message);
};
/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libBKDM1.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_os_log;
#import <libBKDM1.dylib/libBKDM1.dylib-Structs.h>
@class BiometricKitXPCServerMesa, NSString, NSDictionary, NSFileHandle, BLTimeBox, NSDate, NSException, NSDateFormatter, NSMutableString, BLTemplateList, BiometricKitIdentity, NSObject, NSLock, NSMutableDictionary;

@interface BioLogBase : NSObject {

	BiometricKitXPCServerMesa* _server;
	NSString* _rootPath;
	NSString* _logPath;
	NSString* _logFilePath;
	NSString* _lastLogMessage;
	NSDictionary* _fileAttributes;
	NSDictionary* _fileAttributesProtected;
	NSFileHandle* _logFile;
	BLTimeBox* _timeBox;
	NSDate* _logStartDate;
	NSDate* _lastStatusESDRecovery;
	NSException* _lastLogWriteException;
	NSDateFormatter* _timestampFormatter;
	NSDateFormatter* _fileNameFormatter;
	NSDateFormatter* _timeZoneFormatter;
	NSDateFormatter* _milisecondsFormatter;
	unsigned char _fingerStateCaptureCounter;
	unsigned char _mode;
	NSMutableString* _imageCommentString;
	BLTemplateList* _templateList;
	BiometricKitIdentity* _lastMatchedIdentity;
	BOOL _chargerConnected;
	BOOL _compactOSLogOnly;
	BOOL _compact;
	NSObject*<OS_os_log> _osLog;
	unsigned long long _loggingType;
	unsigned long long _lastLogMessageRepeated;
	NSLock* _radarPromptLock;
	NSMutableDictionary* _logDetails;
	IONotificationPortRef _notificationPort;
	unsigned _mesaScanningStateNotification;
	unsigned _powerSourceNotification;
	unsigned long long _absoluteTimeOverride;

}

@property (assign) unsigned long long absoluteTimeOverride;              //@synthesize absoluteTimeOverride=_absoluteTimeOverride - In the implementation block
+(void)updateLogger:(id*)arg1 withServerObject:(id)arg2 identities:(id)arg3 ;
+(void)enableSensorStatusMessages:(BOOL)arg1 withServerObject:(id)arg2 ;
+(int)runInShell:(id)arg1 ;
-(void)logRemoveAllIdentitiesForUser:(unsigned)arg1 withOptions:(id)arg2 fromClient:(id)arg3 ;
-(void)logEnrollResultIdentity:(id)arg1 withTimestamp:(unsigned long long)arg2 forClients:(id)arg3 ;
-(void)logCancelFromClient:(id)arg1 ;
-(BOOL)logLogStartSync;
-(void)promptFileRadar:(id)arg1 withAlternateButton:(id)arg2 andAlternateAction:(/*^block*/id)arg3 withOtherButton:(id)arg4 andOtherAction:(/*^block*/id)arg5 andKeywordIDs:(id)arg6 ;
-(void)logRemoveIdentity:(id)arg1 withError:(int)arg2 ;
-(void)logEnrollStartForUser:(unsigned)arg1 fromClient:(id)arg2 ;
-(void)logImage:(id)arg1 withWidth:(unsigned)arg2 height:(unsigned)arg3 timestamp:(unsigned long long)arg4 captureCounter:(unsigned)arg5 ;
-(void)logError:(id)arg1 withDetails:(id)arg2 status:(int)arg3 ;
-(void)logEnrollStartError:(int)arg1 ;
-(id)packCurrentLog;
-(void)logDisplayState:(BOOL)arg1 withTimestamp:(unsigned long long)arg2 ;
-(void)logUpdateIdentity:(id)arg1 withError:(int)arg2 ;
-(void)logTemplateList:(id)arg1 withIdentity:(id)arg2 listingAllIdentitiesForUser:(unsigned)arg3 imageMetadata:(SCD_Struct_Bi6*)arg4 ;
-(void)logHomeButtonState:(BOOL)arg1 fromKernel:(BOOL)arg2 withTimestamp:(unsigned long long)arg3 ;
-(void)logCapture:(id)arg1 withTimestamp:(unsigned long long)arg2 captureCounter:(unsigned)arg3 ;
-(void)logUnlockedStateSyncWithIdentities:(id)arg1 ;
-(void)logDisconnectingClient:(id)arg1 ;
-(void)logPowerSource:(BOOL)arg1 withAbsoluteTime:(unsigned long long)arg2 async:(BOOL)arg3 ;
-(void)logASLWithRadarPromptOnError:(id)arg1 ;
-(id)_log:(id)arg1 withDetails:(id)arg2 timestamp:(unsigned long long)arg3 fromClient:(id)arg4 forClients:(id)arg5 endingWithToken:(char*)arg6 checkingLogEnd:(BOOL)arg7 osLogMsgType:(unsigned char)arg8 ;
-(void)logTemplateUpdate:(id)arg1 ;
-(void)synchronizeLogFileSync;
-(void)logGetIdentityFromUUID:(id)arg1 fromClient:(id)arg2 ;
-(void)logTemplateUpdateResult:(id)arg1 ;
-(id)getLogPath;
-(id)stringFromTemplateByIdentity:(id)arg1 ;
-(void)logSEPTransferData:(id)arg1 withTimestamp:(unsigned long long)arg2 alsoBinary:(BOOL)arg3 ;
-(void)logCall:(SEL)arg1 withError:(int)arg2 ;
-(void)logCancelError:(int)arg1 ;
-(void)logMobileKeyBagLockStatus:(int)arg1 ;
-(void)logCalibrationData:(id)arg1 ;
-(void)addImageComment:(id)arg1 ;
-(void)logMatchStartError:(int)arg1 ;
-(unsigned long long)absoluteTimeOverride;
-(id)logQueue;
-(void)logFingerDetectStartWithOptions:(id)arg1 fromClient:(id)arg2 ;
-(BOOL)fileRadarWithLogs:(id)arg1 withDescription:(id)arg2 ;
-(void)logProtectedConfigurationSync:(id)arg1 forUser:(unsigned)arg2 fromClient:(id)arg3 ;
-(void)logGetMaxIdentityCount:(int)arg1 fromClient:(id)arg2 ;
-(void)logRemoveIdentity:(id)arg1 withOptions:(id)arg2 fromClient:(id)arg3 withTimestamp:(unsigned long long)arg4 ;
-(void)synchronizeLogFile;
-(void)logGetIdentities:(id)arg1 fromClient:(id)arg2 ;
-(void)logProtectedConfigurationError:(int)arg1 ;
-(void)logStatusMessage:(int)arg1 withData:(id)arg2 timestamp:(unsigned long long)arg3 forClients:(id)arg4 ;
-(void)logPowerStateSync:(BOOL)arg1 withTimestamp:(unsigned long long)arg2 ;
-(BOOL)chargerConnected:(BOOL*)arg1 ;
-(void)logTopology:(SCD_Struct_Bi9*)arg1 ;
-(void)logTemplateListWithIdentity:(id)arg1 listingAllIdentitiesForUser:(unsigned)arg2 ;
-(void)logSKSLockState:(unsigned short)arg1 forUser:(unsigned)arg2 withTimestamp:(unsigned long long)arg3 ;
-(void)logSaveTemplateListWithDetails:(id)arg1 ;
-(id)attachmentsFromAllLogs;
-(void)logUnlockedStateWithIdentities:(id)arg1 ;
-(id)imageFileNameWithTimestamp:(unsigned long long)arg1 captureCounter:(unsigned)arg2 ;
-(void)logTemplateLists:(id)arg1 fromIdentities:(id)arg2 ;
-(BOOL)fileRadarWithLogs:(id)arg1 withDescription:(id)arg2 andKeywordIDs:(id)arg3 ;
-(void)compactLog;
-(void)noteAssertionFailureWithResultCode:(int)arg1 ;
-(void)logPowerSourceStateAsync:(BOOL)arg1 initial:(BOOL)arg2 ;
-(void)logFingerDetectStartError:(int)arg1 ;
-(id)stringFromTemplateListForUser:(unsigned)arg1 ;
-(id)logNameFromDate:(id)arg1 ;
-(id)attachmentsFromCurrentLog;
-(void)logMatchStart:(id)arg1 withOptions:(id)arg2 fromClient:(id)arg3 ;
-(void)logSensorRecoveryReason:(unsigned)arg1 withTimestamp:(unsigned long long)arg2 ;
-(void)uninitializeEventSystem;
-(void)initializeEventSystem;
-(void)checkLogEndWithAbsoluteTime:(unsigned long long)arg1 ;
-(void)logUpdateIdentity:(id)arg1 withOptions:(id)arg2 fromClient:(id)arg3 ;
-(id)timeBox;
-(id)log:(id)arg1 withDetails:(id)arg2 timestamp:(unsigned long long)arg3 forClients:(id)arg4 endingWithToken:(char*)arg5 osLogMsgType:(unsigned char)arg6 ;
-(void)logAsync:(id)arg1 withDetails:(id)arg2 timestamp:(unsigned long long)arg3 endingWithToken:(char*)arg4 ;
-(void)logMatchStartFromClient:(id)arg1 ;
-(void)logTemplateGraphState:(SCD_Struct_Bi18*)arg1 ;
-(id)log:(id)arg1 withDetails:(id)arg2 timestamp:(unsigned long long)arg3 fromClient:(id)arg4 endingWithToken:(char*)arg5 osLogMsgType:(unsigned char)arg6 ;
-(void)logKernelMessage:(id)arg1 ;
-(void)logSaveTemplateListError:(int)arg1 ;
-(void)logCall:(SEL)arg1 withParameters:(id)arg2 fromClient:(id)arg3 ;
-(void)closeLogFile;
-(void)logThermalLevel:(unsigned char)arg1 ;
-(void)logProtectedConfiguration:(id)arg1 forUser:(unsigned)arg2 fromClient:(id)arg3 ;
-(id)packAllLogs;
-(void)logWakeGestureState:(long long)arg1 ;
-(void)logMatchResultIdentity:(id)arg1 withDetails:(id)arg2 timestamp:(unsigned long long)arg3 forClients:(id)arg4 ;
-(void)logStackshotWithErrorCode:(long long)arg1 ;
-(void)setAbsoluteTimeOverride:(unsigned long long)arg1 ;
-(void)logSensorStatus:(id)arg1 ;
-(void)updateIdentity:(id)arg1 ;
-(void)dealloc;
-(void)logDelegateRegistered:(BOOL)arg1 fromClient:(id)arg2 ;
-(void)logASLDelayedWithRadarPromptOnError:(BOOL)arg1 ;
-(id)initToPath:(id)arg1 withServerObject:(id)arg2 identities:(id)arg3 mode:(unsigned char)arg4 ;
-(BOOL)createNewLog;
@end

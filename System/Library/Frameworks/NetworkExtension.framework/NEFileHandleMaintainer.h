/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_xpc_object;
@class NSMutableArray, NSObject, NSString;

@interface NEFileHandleMaintainer : NSObject {

	BOOL _changed;
	BOOL _isOwnerMode;
	NSMutableArray* _fileHandles;
	/*^block*/id _receivedHandlesCallback;
	NSObject*<OS_xpc_object> _auxiliaryDataDictionary;
	NSString* _eventName;

}

@property (retain) NSMutableArray * fileHandles;                                  //@synthesize fileHandles=_fileHandles - In the implementation block
@property (assign) BOOL changed;                                                  //@synthesize changed=_changed - In the implementation block
@property (copy) id receivedHandlesCallback;                                      //@synthesize receivedHandlesCallback=_receivedHandlesCallback - In the implementation block
@property (assign) BOOL isOwnerMode;                                              //@synthesize isOwnerMode=_isOwnerMode - In the implementation block
@property (retain) NSObject*<OS_xpc_object> auxiliaryDataDictionary;              //@synthesize auxiliaryDataDictionary=_auxiliaryDataDictionary - In the implementation block
@property (retain) NSString * eventName;                                          //@synthesize eventName=_eventName - In the implementation block
+(id)sharedMaintainer;
-(BOOL)changed;
-(void)commit;
-(NSString *)eventName;
-(void)setEventName:(NSString *)arg1 ;
-(id)init;
-(void)setChanged:(BOOL)arg1 ;
-(void)removeFileHandleMatchingPredicate:(/*^block*/id)arg1 ;
-(id)createEvent;
-(void)setReceivedHandlesCallback:(id)arg1 ;
-(void)setAuxiliaryData:(id)arg1 forKey:(id)arg2 ;
-(id)copyAuxiliaryDataForKey:(id)arg1 ;
-(void)setIsOwnerMode:(BOOL)arg1 ;
-(void)setFileHandles:(NSMutableArray *)arg1 ;
-(BOOL)isOwnerMode;
-(void)setFileHandle:(id)arg1 matchingPredicate:(/*^block*/id)arg2 ;
-(NSMutableArray *)fileHandles;
-(void)startOwnerModeWithEventName:(id)arg1 handlesReceivedCallback:(/*^block*/id)arg2 ;
-(NSObject*<OS_xpc_object>)auxiliaryDataDictionary;
-(id)receivedHandlesCallback;
-(void)resetFileHandlesFromEvent:(id)arg1 ;
-(void)iterateFileHandlesWithBlock:(/*^block*/id)arg1 ;
-(void)setAuxiliaryDataDictionary:(NSObject*<OS_xpc_object>)arg1 ;
@end


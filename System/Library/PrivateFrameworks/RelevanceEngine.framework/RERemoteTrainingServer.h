/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/RERemoteTrainingServerInterface.h>

@class NSXPCConnection, NSString;

@interface RERemoteTrainingServer : NSObject <RERemoteTrainingServerInterface> {

	NSXPCConnection* _connection;
	NSString* _processName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_clearConnection;
-(void)_queue_setupConnectionIfNeeded;
-(void)performTrainingWithElements:(id)arg1 events:(id)arg2 interactions:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)updateRemoteAttribute:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithTargetProcessName:(id)arg1 ;
@end


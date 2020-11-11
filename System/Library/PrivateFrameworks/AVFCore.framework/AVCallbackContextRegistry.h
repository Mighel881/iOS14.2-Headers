/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface AVCallbackContextRegistry : NSObject {

	NSMutableDictionary* _contextsForTokens;
	unsigned long long _currentToken;
	NSObject*<OS_dispatch_queue> _readWriteQueue;

}
+(void)initialize;
+(id)sharedCallbackContextRegistry;
-(void)unregisterCallbackContextForToken:(void*)arg1 ;
-(id)init;
-(void*)registerCallbackContextObject:(id)arg1 ;
-(id)callbackContextForToken:(void*)arg1 ;
-(void)dealloc;
@end

/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface VUIScopedBackgroundTask : NSObject {

	unsigned long long _taskIdentifier;

}

@property (assign,nonatomic) unsigned long long taskIdentifier;              //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
-(unsigned long long)taskIdentifier;
-(id)init;
-(void)setTaskIdentifier:(unsigned long long)arg1 ;
-(void)_endTask;
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 expirationHandler:(/*^block*/id)arg2 ;
@end

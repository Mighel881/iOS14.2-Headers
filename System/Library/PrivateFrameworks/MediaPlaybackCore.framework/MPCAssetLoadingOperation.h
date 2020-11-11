/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@protocol MPCAssetLoaderDelegate, OS_dispatch_queue;
@class MPAVItem, MPCPlayerItemConfigurator, NSObject;

@interface MPCAssetLoadingOperation : NSOperation {

	MPAVItem* _item;
	id<MPCAssetLoaderDelegate> _delegate;
	MPCPlayerItemConfigurator* _configurator;
	long long _token;
	/*^block*/id _completion;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,copy,readonly) MPAVItem * item;                                           //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<MPCAssetLoaderDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MPCPlayerItemConfigurator * configurator;                         //@synthesize configurator=_configurator - In the implementation block
@property (nonatomic,readonly) long long token;                                                //@synthesize token=_token - In the implementation block
@property (nonatomic,copy,readonly) id completion;                                             //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
-(MPAVItem *)item;
-(id<MPCAssetLoaderDelegate>)delegate;
-(MPCPlayerItemConfigurator *)configurator;
-(id)completion;
-(long long)token;
-(void)main;
-(void)setDelegate:(id<MPCAssetLoaderDelegate>)arg1 ;
-(void)setConfigurator:(MPCPlayerItemConfigurator *)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(id)initWithPlayerItem:(id)arg1 configurator:(id)arg2 delegate:(id)arg3 token:(long long)arg4 callbackQueue:(id)arg5 completion:(/*^block*/id)arg6 ;
@end

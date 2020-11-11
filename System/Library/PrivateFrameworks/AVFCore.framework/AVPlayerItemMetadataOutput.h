/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVPlayerItemOutput.h>

@class AVPlayerItemMetadataOutputInternal, NSDictionary;

@interface AVPlayerItemMetadataOutput : AVPlayerItemOutput {

	AVPlayerItemMetadataOutputInternal* _metadataOutputInternal;

}

@property (getter=_figMetadataOutputsDictionaryOptions,nonatomic,readonly) NSDictionary * figMetadataOutputsDictionaryOptions; 
@property (nonatomic,__weak,readonly) id<AVPlayerItemMetadataOutputPushDelegate> delegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue; 
@property (assign,nonatomic) double advanceIntervalForDelegateInvocation; 
+(void)initialize;
-(id)initWithIdentifiers:(id)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setAdvanceIntervalForDelegateInvocation:(double)arg1 ;
-(id)init;
-(id<AVPlayerItemMetadataOutputPushDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)_signalFlush;
-(void)_collectUncollectables;
-(id)_figMetadataOutputsDictionaryOptions;
-(BOOL)_attachToPlayerItem:(id)arg1 ;
-(void)_detachFromPlayerItem;
-(void)_pushTimedMetadataGroups:(id)arg1 fromPlayerItemTrack:(id)arg2 ;
-(double)advanceIntervalForDelegateInvocation;
-(void)dealloc;
@end

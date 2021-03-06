/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BookCoverUtility.framework/BookCoverUtility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BCUOperation.h>

@protocol BCUPurgeableImage;
@class BCULayerRenderer, CALayer, NSString;

@interface _BCULayerRendererOperation : NSObject <BCUOperation> {

	Aq _operationId;
	BOOL _cancelled;
	BOOL _configuring;
	BOOL _waitForCPUSynchronization;
	float _priority;
	BCULayerRenderer* _renderer;
	/*^block*/id _layerBlock;
	/*^block*/id _completion;
	CALayer* _layer;
	id<BCUPurgeableImage> _result;

}

@property (nonatomic,retain) BCULayerRenderer * renderer;                   //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,copy) id layerBlock;                                   //@synthesize layerBlock=_layerBlock - In the implementation block
@property (nonatomic,copy) id completion;                                   //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) CALayer * layer;                               //@synthesize layer=_layer - In the implementation block
@property (nonatomic,retain) id<BCUPurgeableImage> result;                  //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) BOOL waitForCPUSynchronization;              //@synthesize waitForCPUSynchronization=_waitForCPUSynchronization - In the implementation block
@property (assign,nonatomic) float priority;                                //@synthesize priority=_priority - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLayer:(CALayer *)arg1 ;
-(void)start;
-(void)setResult:(id<BCUPurgeableImage>)arg1 ;
-(BCULayerRenderer *)renderer;
-(void)setCompletion:(id)arg1 ;
-(CALayer *)layer;
-(id)completion;
-(void)setRenderer:(BCULayerRenderer *)arg1 ;
-(float)priority;
-(void)setPriority:(float)arg1 ;
-(id<BCUPurgeableImage>)result;
-(void)cancel;
-(void)dealloc;
-(id)initWithRenderer:(id)arg1 priority:(float)arg2 waitForCPUSynchronization:(BOOL)arg3 layerBlock:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(id)configureLayer;
-(void)completeWithImage:(id)arg1 ;
-(long long)_compareHoldingStateLock:(id)arg1 ;
-(id)layerBlock;
-(void)setLayerBlock:(id)arg1 ;
-(BOOL)waitForCPUSynchronization;
@end


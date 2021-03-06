/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BWJasperColorStillsExecutorControllerDelegate;
@class BWJasperColorStillsExecutorInput;

@interface BWJasperColorStillsExecutorRequest : NSObject {

	int _err;
	BWJasperColorStillsExecutorInput* _input;
	id<BWJasperColorStillsExecutorControllerDelegate> _delegate;

}

@property (assign,nonatomic) int err;                                                                   //@synthesize err=_err - In the implementation block
@property (nonatomic,readonly) BWJasperColorStillsExecutorInput * input;                                //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) id<BWJasperColorStillsExecutorControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(int)err;
-(BWJasperColorStillsExecutorInput *)input;
-(id<BWJasperColorStillsExecutorControllerDelegate>)delegate;
-(id)description;
-(void)setErr:(int)arg1 ;
-(void)dealloc;
-(id)initWithInput:(id)arg1 delegate:(id)arg2 ;
@end


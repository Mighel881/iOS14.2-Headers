/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSNumber;


@protocol HUStepperCellProtocol <NSObject>
@property (assign,nonatomic,__weak) id<HUStepperCellDelegate> stepperCellDelegate; 
@property (nonatomic,copy) NSNumber * minimumValue; 
@property (nonatomic,copy) NSNumber * maximumValue; 
@property (nonatomic,copy) NSNumber * stepValue; 
@property (nonatomic,copy) NSNumber * stepperValue; 
@required
-(NSNumber *)stepValue;
-(void)setMaximumValue:(id)arg1;
-(NSNumber *)minimumValue;
-(NSNumber *)maximumValue;
-(void)setStepValue:(id)arg1;
-(void)setMinimumValue:(id)arg1;
-(NSNumber *)stepperValue;
-(void)setStepperValue:(id)arg1;
-(id<HUStepperCellDelegate>)stepperCellDelegate;
-(void)setStepperCellDelegate:(id)arg1;

@end


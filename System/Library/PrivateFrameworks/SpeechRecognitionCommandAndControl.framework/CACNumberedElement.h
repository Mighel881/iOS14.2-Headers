/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol CACNumberedElement <CACVoiceOverDescribable>
@property (assign,nonatomic) CGRect labelRectangle; 
@property (nonatomic,readonly) CGRect interfaceOrientedRectangle; 
@property (nonatomic,readonly) NSString * label; 
@property (nonatomic,retain) NSString * numberedLabel; 
@property (assign,nonatomic) long long arrowOrientation; 
@property (assign,nonatomic) long long badgePresentation; 
@required
-(NSString *)label;
-(NSString *)numberedLabel;
-(CGRect)interfaceOrientedRectangle;
-(void)setNumberedLabel:(id)arg1;
-(CGRect)labelRectangle;
-(void)setLabelRectangle:(CGRect)arg1;
-(long long)arrowOrientation;
-(void)setArrowOrientation:(long long)arg1;
-(long long)badgePresentation;
-(void)setBadgePresentation:(long long)arg1;

@end


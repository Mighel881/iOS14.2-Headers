/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FitnessUI/FitnessUI-Structs.h>
#import <UIKitCore/UIDatePicker.h>

@interface FIUIHealthSettingsDatePicker : UIDatePicker {

	/*^block*/id _dateUpdateHandler;

}

@property (nonatomic,copy) id dateUpdateHandler;              //@synthesize dateUpdateHandler=_dateUpdateHandler - In the implementation block
-(void)forceUpdate;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_dateDidChange:(id)arg1 ;
-(id)dateUpdateHandler;
-(void)setDateUpdateHandler:(id)arg1 ;
@end


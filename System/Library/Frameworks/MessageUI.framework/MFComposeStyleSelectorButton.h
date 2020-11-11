/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UIButton.h>

@interface MFComposeStyleSelectorButton : UIButton {

	long long _styleType;

}

@property (nonatomic,readonly) long long styleType;              //@synthesize styleType=_styleType - In the implementation block
+(id)buttonWithStyleType:(long long)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(void)setSelected:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)styleType;
-(id)_imageForTextStyleType:(long long)arg1 ;
-(void)_commonInit;
@end

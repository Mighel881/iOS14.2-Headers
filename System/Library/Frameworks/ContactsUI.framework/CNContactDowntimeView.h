/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSDictionary, UILabel, NSTextAttachment;

@interface CNContactDowntimeView : UIView {

	NSDictionary* _ab_textAttributes;
	long long _elements;
	UILabel* _downtimeLabel;
	NSTextAttachment* _imageAttachment;

}

@property (nonatomic,readonly) UILabel * downtimeLabel;                         //@synthesize downtimeLabel=_downtimeLabel - In the implementation block
@property (nonatomic,readonly) NSTextAttachment * imageAttachment;              //@synthesize imageAttachment=_imageAttachment - In the implementation block
@property (nonatomic,copy) NSDictionary * ab_textAttributes;                    //@synthesize ab_textAttributes=_ab_textAttributes - In the implementation block
@property (assign,nonatomic) long long elements;                                //@synthesize elements=_elements - In the implementation block
+(id)lockImageAttachment;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)elements;
-(void)invalidateIntrinsicContentSize;
-(NSTextAttachment *)imageAttachment;
-(UILabel *)downtimeLabel;
-(void)setElements:(long long)arg1 ;
-(NSDictionary *)ab_textAttributes;
-(void)setAb_textAttributes:(NSDictionary *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)updateAttributedText;
@end


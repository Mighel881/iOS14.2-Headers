/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewReuseView.h>
#import <libobjc.A.dylib/SKUIViewElementView.h>

@class SKUIAttributedStringView, NSString;

@interface SKUIReviewListTitleView : SKUIViewReuseView <SKUIViewElementView> {

	SKUIAttributedStringView* _titleView;
	SKUIAttributedStringView* _dateView;
	UIEdgeInsets _contentInset;

}

@property (assign,nonatomic) UIEdgeInsets contentInset;                         //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,retain) SKUIAttributedStringView * titleView;              //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) SKUIAttributedStringView * dateView;               //@synthesize dateView=_dateView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3 ;
+(id)_dateLabelForViewElement:(id)arg1 ;
+(id)_attributedStringForDateLabel:(id)arg1 context:(id)arg2 ;
+(id)_textLabelForViewElement:(id)arg1 ;
+(id)_attributedStringForTitleLabel:(id)arg1 context:(id)arg2 ;
-(SKUIAttributedStringView *)dateView;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInset;
-(id)initWithFrame:(CGRect)arg1 ;
-(SKUIAttributedStringView *)titleView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTitleView:(SKUIAttributedStringView *)arg1 ;
-(void)setDateView:(SKUIAttributedStringView *)arg1 ;
-(void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3 ;
-(id)viewForElementIdentifier:(id)arg1 ;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UILabel;

@interface PUPhotoEditOverlayBadge : UIView {

	NSString* _text;
	UILabel* _label;
	UIEdgeInsets _insets;

}

@property (nonatomic,readonly) UILabel * label;                  //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets insets;              //@synthesize insets=_insets - In the implementation block
@property (nonatomic,copy) NSString * text;                      //@synthesize text=_text - In the implementation block
-(void)setText:(NSString *)arg1 ;
-(UILabel *)label;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateLabel;
-(NSString *)text;
-(UIEdgeInsets)insets;
@end

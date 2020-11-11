/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>
#import <libobjc.A.dylib/CKSearchResultSupplementryCell.h>

@class UISegmentedControl, NSString;

@interface CKPhotosSearchResultsModeHeaderReusableView : UICollectionReusableView <CKSearchResultSupplementryCell> {

	UISegmentedControl* _control;
	UIEdgeInsets marginInsets;

}

@property (nonatomic,retain) UISegmentedControl * control;              //@synthesize control=_control - In the implementation block
@property (assign,nonatomic) UIEdgeInsets marginInsets; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supplementaryViewType;
+(double)desiredZPosition;
+(id)reuseIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)marginInsets;
-(UISegmentedControl *)control;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg1 ;
-(void)_controlIndexDidChange:(id)arg1 ;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(void)setControl:(UISegmentedControl *)arg1 ;
-(void)layoutSubviews;
@end

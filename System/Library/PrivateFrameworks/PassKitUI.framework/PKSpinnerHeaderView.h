/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class UIActivityIndicatorView;

@interface PKSpinnerHeaderView : UITableViewHeaderFooterView {

	UIActivityIndicatorView* _spinner;
	BOOL _showSpinner;

}

@property (assign,nonatomic) BOOL showSpinner;              //@synthesize showSpinner=_showSpinner - In the implementation block
-(void)layoutSubviews;
-(void)prepareForReuse;
-(BOOL)showSpinner;
-(void)setShowSpinner:(BOOL)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end


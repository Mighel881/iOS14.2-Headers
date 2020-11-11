/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/LoginUILogViewer.framework/LoginUILogViewer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LoginUILogViewer/LoginUILogViewer-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView, UILabel, UIButton;

@interface LUILogScreenshotCollectionViewCell : UICollectionViewCell {

	UIImageView* _screenshotImageView;
	UILabel* _screenshotDateLabel;
	UIButton* _clearButton;
	/*^block*/id _clearButtonAction;

}

@property (nonatomic,readonly) UIImageView * screenshotImageView;              //@synthesize screenshotImageView=_screenshotImageView - In the implementation block
@property (nonatomic,readonly) UILabel * screenshotDateLabel;                  //@synthesize screenshotDateLabel=_screenshotDateLabel - In the implementation block
@property (nonatomic,readonly) UIButton * clearButton;                         //@synthesize clearButton=_clearButton - In the implementation block
@property (nonatomic,copy) id clearButtonAction;                               //@synthesize clearButtonAction=_clearButtonAction - In the implementation block
-(void)_setup;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIButton *)clearButton;
-(UIImageView *)screenshotImageView;
-(UILabel *)screenshotDateLabel;
-(void)setClearButtonAction:(id)arg1 ;
-(id)_createClearButton;
-(void)clearButtonTapped:(id)arg1 ;
-(id)_createScreenshotImageView;
-(id)_createScreenshotDateLabel;
-(id)clearButtonAction;
@end

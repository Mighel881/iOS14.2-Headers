/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIView.h>

@class UIStackView, UILabel, UIView, NSLayoutConstraint, UIImageView, NSString;

@interface _SFQuickLookDocumentInfoView : UIView {

	UIStackView* _stackView;
	UILabel* _fileNameLabel;
	UILabel* _fileSizeLabel;
	UIView* _spacingView;
	NSLayoutConstraint* _iconHeightConstraint;
	NSLayoutConstraint* _iconWidthConstraint;
	NSLayoutConstraint* _lineHeightBetweenIconAndFileNameLabelConstraint;
	UIImageView* _iconImageView;
	NSString* _fileName;
	NSString* _fileSize;
	NSString* _fileType;

}

@property (nonatomic,retain) UIImageView * iconImageView;              //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,retain) NSString * fileName;                      //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,retain) NSString * fileSize;                      //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,retain) NSString * fileType;                      //@synthesize fileType=_fileType - In the implementation block
-(UIImageView *)iconImageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updatePropertiesDefinedByContentSizeCategory;
-(void)_configureOrientationBasedConstraints:(long long)arg1 ;
-(void)_updateDocumentSizeLabel;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
-(NSString *)fileSize;
-(void)setFileType:(NSString *)arg1 ;
-(void)setFileSize:(NSString *)arg1 ;
-(NSString *)fileType;
@end


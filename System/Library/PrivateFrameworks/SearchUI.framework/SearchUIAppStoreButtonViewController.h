/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchUI/SearchUIAccessoryViewController.h>

@class TLKStoreButton;

@interface SearchUIAppStoreButtonViewController : SearchUIAccessoryViewController {

	BOOL _appIsInstalled;
	TLKStoreButton* _appStoreButton;

}

@property (nonatomic,retain) TLKStoreButton * appStoreButton;              //@synthesize appStoreButton=_appStoreButton - In the implementation block
@property (assign,nonatomic) BOOL appIsInstalled;                          //@synthesize appIsInstalled=_appIsInstalled - In the implementation block
+(BOOL)supportsRowModel:(id)arg1 ;
-(void)updateWithRowModel:(id)arg1 ;
-(id)setupView;
-(BOOL)shouldTopAlignForAccessibilityContentSizes;
-(unsigned long long)type;
-(void)setAppStoreButton:(TLKStoreButton *)arg1 ;
-(void)setAppIsInstalled:(BOOL)arg1 ;
-(BOOL)appIsInstalled;
-(TLKStoreButton *)appStoreButton;
-(void)buttonPressed;
@end


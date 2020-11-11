/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PSListController, NSArray, PSSpecifier;

@interface CTUIListWithHeaderLoadingGroup : NSObject {

	PSListController* _hostController;
	NSArray* _headerSpecifiers;
	NSArray* _contentSpecifiers;
	PSSpecifier* _spinnerSpecifier;

}

@property (assign,nonatomic,__weak) PSListController * hostController;              //@synthesize hostController=_hostController - In the implementation block
@property (nonatomic,retain) NSArray * headerSpecifiers;                            //@synthesize headerSpecifiers=_headerSpecifiers - In the implementation block
@property (nonatomic,retain) NSArray * contentSpecifiers;                           //@synthesize contentSpecifiers=_contentSpecifiers - In the implementation block
@property (nonatomic,retain) PSSpecifier * spinnerSpecifier;                        //@synthesize spinnerSpecifier=_spinnerSpecifier - In the implementation block
-(id)specifiers;
-(void)setHostController:(PSListController *)arg1 ;
-(PSSpecifier *)spinnerSpecifier;
-(PSListController *)hostController;
-(void)setSpinnerSpecifier:(PSSpecifier *)arg1 ;
-(id)initWithHostController:(id)arg1 ;
-(NSArray *)headerSpecifiers;
-(NSArray *)contentSpecifiers;
-(void)setContentSpecifiers:(NSArray *)arg1 ;
-(void)setHeaderSpecifiers:(NSArray *)arg1 ;
@end

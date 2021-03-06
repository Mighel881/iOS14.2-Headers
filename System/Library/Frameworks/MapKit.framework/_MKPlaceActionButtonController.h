/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_MKInfoCardChildViewControllerAnalyticsDelegate.h>

@protocol _MKPlaceActionControlledButton;
@class NSString;

@interface _MKPlaceActionButtonController : NSObject <_MKInfoCardChildViewControllerAnalyticsDelegate> {

	BOOL _disabled;
	int _analyticsAction;
	NSString* _buttonTitle;
	NSString* _buttonSubTitle;
	/*^block*/id _buttonSelectedBlock;
	id<_MKPlaceActionControlledButton> _delegate;

}

@property (assign,nonatomic,__weak) id<_MKPlaceActionControlledButton> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * buttonTitle;                                        //@synthesize buttonTitle=_buttonTitle - In the implementation block
@property (nonatomic,readonly) NSString * buttonSubTitle;                                     //@synthesize buttonSubTitle=_buttonSubTitle - In the implementation block
@property (nonatomic,readonly) id buttonSelectedBlock;                                        //@synthesize buttonSelectedBlock=_buttonSelectedBlock - In the implementation block
@property (nonatomic,readonly) BOOL disabled;                                                 //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,readonly) int analyticsAction;                                           //@synthesize analyticsAction=_analyticsAction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)actionButtonControllerWithTitle:(id)arg1 subTitle:(id)arg2 selectedBlock:(/*^block*/id)arg3 ;
+(id)actionButtonControllerWithTitle:(id)arg1 subTitle:(id)arg2 selectedBlock:(/*^block*/id)arg3 disabled:(BOOL)arg4 ;
-(id<_MKPlaceActionControlledButton>)delegate;
-(id)infoCardChildPossibleActions;
-(id)infoCardChildUnactionableUIElements;
-(NSString *)buttonTitle;
-(void)setDelegate:(id<_MKPlaceActionControlledButton>)arg1 ;
-(BOOL)disabled;
-(void)buttonTextChanged;
-(id)initWithTitle:(id)arg1 subTitle:(id)arg2 analyticsAction:(int)arg3 selectedBlock:(/*^block*/id)arg4 disabled:(BOOL)arg5 ;
-(int)analyticsAction;
-(id)initWithTitle:(id)arg1 subTitle:(id)arg2 selectedBlock:(/*^block*/id)arg3 ;
-(NSString *)buttonSubTitle;
-(id)buttonSelectedBlock;
@end


/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/HUControlView.h>

@protocol HUControlViewDelegate;
@class NSString, UILabel, NSArray;

@interface HUTemperatureUnitControlView : UIView <HUControlView> {

	BOOL _canBeHighlighted;
	BOOL _viewDisabled;
	NSString* _identifier;
	id<HUControlViewDelegate> _delegate;
	UILabel* _titleLabel;
	UILabel* _detailLabel;
	long long _currentUnit;
	NSArray* _labelConstraints;

}

@property (nonatomic,retain) UILabel * titleLabel;                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailLabel;                                  //@synthesize detailLabel=_detailLabel - In the implementation block
@property (assign,nonatomic) long long currentUnit;                                  //@synthesize currentUnit=_currentUnit - In the implementation block
@property (assign,nonatomic) BOOL viewDisabled;                                      //@synthesize viewDisabled=_viewDisabled - In the implementation block
@property (nonatomic,copy) NSArray * labelConstraints;                               //@synthesize labelConstraints=_labelConstraints - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<HUControlViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id value; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled; 
@property (assign,nonatomic) BOOL canBeHighlighted;                                  //@synthesize canBeHighlighted=_canBeHighlighted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)valueClass;
-(void)setDisabled:(BOOL)arg1 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(BOOL)isDisabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<HUControlViewDelegate>)delegate;
-(NSString *)identifier;
-(void)setDelegate:(id<HUControlViewDelegate>)arg1 ;
-(UILabel *)detailLabel;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)value;
-(NSArray *)labelConstraints;
-(void)setLabelConstraints:(NSArray *)arg1 ;
-(void)setValue:(id)arg1 ;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(void)updateConstraints;
-(long long)currentUnit;
-(void)setCurrentUnit:(long long)arg1 ;
-(id)_unitStringForCurrentUnit;
-(BOOL)viewDisabled;
-(BOOL)canBeHighlighted;
-(void)setCanBeHighlighted:(BOOL)arg1 ;
-(void)setViewDisabled:(BOOL)arg1 ;
@end


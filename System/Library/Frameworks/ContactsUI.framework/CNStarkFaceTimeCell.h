/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUI/CNContactCell.h>
#import <libobjc.A.dylib/CNStarkActionViewDelegate.h>

@protocol CNPropertyCellDelegate;
@class NSDictionary, UILabel, CNStarkActionView, NSString;

@interface CNStarkFaceTimeCell : CNContactCell <CNStarkActionViewDelegate> {

	id<CNPropertyCellDelegate> _delegate;
	NSDictionary* _labelTextAttributes;
	UILabel* _faceTimeLabel;
	CNStarkActionView* _actionView;

}

@property (nonatomic,retain) UILabel * faceTimeLabel;                                 //@synthesize faceTimeLabel=_faceTimeLabel - In the implementation block
@property (nonatomic,readonly) CNStarkActionView * actionView;                        //@synthesize actionView=_actionView - In the implementation block
@property (assign,nonatomic,__weak) id<CNPropertyCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSDictionary * labelTextAttributes;                        //@synthesize labelTextAttributes=_labelTextAttributes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)requiresConstraintBasedLayout;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setSeparatorStyle:(long long)arg1 ;
-(BOOL)shouldShowStar;
-(void)actionViewTapped:(id)arg1 ;
-(BOOL)supportsTintColorValue;
-(void)updateTransportButtons;
-(void)setFaceTimeLabel:(UILabel *)arg1 ;
-(void)setLabelTextAttributes:(NSDictionary *)arg1 ;
-(id<CNPropertyCellDelegate>)delegate;
-(id)constantConstraints;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)performDefaultAction;
-(CNStarkActionView *)actionView;
-(void)setDelegate:(id<CNPropertyCellDelegate>)arg1 ;
-(id)variableConstraints;
-(void)_cnui_applyContactStyle;
-(NSDictionary *)labelTextAttributes;
-(UILabel *)faceTimeLabel;
@end

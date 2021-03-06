/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PKPassHeaderViewDelegate, PKPassLibraryDataProvider;
@class PKRemoteDataAccessor, UIView, UIImageView, UILabel, PKPass, PKPassView, PKPeerPaymentAccount, PKPassFaceViewRendererState, UIColor;

@interface PKPassHeaderView : UIView {

	PKRemoteDataAccessor* _remoteDataAccessor;
	UIView* _passMaskView;
	UIImageView* _maskShadow;
	UILabel* _title;
	UILabel* _subtitle;
	double passImageHeight;
	BOOL _small;
	BOOL _showModificationDate;
	BOOL _expiredPass;
	PKPass* _pass;
	PKPassView* _passView;
	PKPeerPaymentAccount* _peerPaymentAccount;
	PKPassFaceViewRendererState* _rendererState;
	unsigned long long _suppressedContent;
	UIColor* _primaryTextColor;
	UIColor* _secondaryTextColor;
	id<PKPassHeaderViewDelegate> _delegate;
	id<PKPassLibraryDataProvider> _passLibraryOverride;

}

@property (nonatomic,retain) PKPass * pass;                                                  //@synthesize pass=_pass - In the implementation block
@property (nonatomic,readonly) PKPassView * passView;                                        //@synthesize passView=_passView - In the implementation block
@property (assign,getter=isSmall,nonatomic) BOOL small;                                      //@synthesize small=_small - In the implementation block
@property (nonatomic,retain) PKPeerPaymentAccount * peerPaymentAccount;                      //@synthesize peerPaymentAccount=_peerPaymentAccount - In the implementation block
@property (nonatomic,retain) PKPassFaceViewRendererState * rendererState;                    //@synthesize rendererState=_rendererState - In the implementation block
@property (assign,nonatomic) unsigned long long suppressedContent;                           //@synthesize suppressedContent=_suppressedContent - In the implementation block
@property (assign,nonatomic) BOOL showModificationDate;                                      //@synthesize showModificationDate=_showModificationDate - In the implementation block
@property (assign,nonatomic) BOOL expiredPass;                                               //@synthesize expiredPass=_expiredPass - In the implementation block
@property (nonatomic,retain) UIColor * primaryTextColor;                                     //@synthesize primaryTextColor=_primaryTextColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryTextColor;                                   //@synthesize secondaryTextColor=_secondaryTextColor - In the implementation block
@property (assign,nonatomic,__weak) id<PKPassHeaderViewDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<PKPassLibraryDataProvider> passLibraryOverride;              //@synthesize passLibraryOverride=_passLibraryOverride - In the implementation block
-(void)_updateContent;
-(id<PKPassHeaderViewDelegate>)delegate;
-(void)setShowModificationDate:(BOOL)arg1 ;
-(void)setExpiredPass:(BOOL)arg1 ;
-(void)setSmall:(BOOL)arg1 ;
-(void)updateShadow:(double)arg1 ;
-(void)updateModifiedDate;
-(PKPeerPaymentAccount *)peerPaymentAccount;
-(BOOL)isSmall;
-(void)setSecondaryTextColor:(UIColor *)arg1 ;
-(id)initWithPass:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(PKPassView *)passView;
-(void)setPass:(PKPass *)arg1 ;
-(void)setDelegate:(id<PKPassHeaderViewDelegate>)arg1 ;
-(id)initWithPass:(id)arg1 rendererState:(id)arg2 ;
-(SCD_Struct_PK33)passSizeInfoForHeight:(double)arg1 ;
-(void)_updateTextContent;
-(CGSize)passViewSizeForHeight:(double)arg1 ;
-(void)setRendererState:(PKPassFaceViewRendererState *)arg1 ;
-(BOOL)showModificationDate;
-(void)layoutSubviews;
-(BOOL)expiredPass;
-(id<PKPassLibraryDataProvider>)passLibraryOverride;
-(void)setPassLibraryOverride:(id<PKPassLibraryDataProvider>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(PKPassFaceViewRendererState *)rendererState;
-(void)_passLibraryDidChange:(id)arg1 ;
-(void)_resetFonts;
-(void)setPeerPaymentAccount:(PKPeerPaymentAccount *)arg1 ;
-(void)setSuppressedContent:(unsigned long long)arg1 ;
-(PKPass *)pass;
-(UIColor *)primaryTextColor;
-(UIColor *)secondaryTextColor;
-(id)_primaryTextColor;
-(id)_secondaryTextColor;
-(void)setPrimaryTextColor:(UIColor *)arg1 ;
-(unsigned long long)suppressedContent;
-(void)dealloc;
@end


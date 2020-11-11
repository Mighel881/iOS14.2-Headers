/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentView.h>

@protocol SXIssueCoverViewProvider;
@class UIView;

@interface SXIssueCoverComponentView : SXComponentView {

	id<SXIssueCoverViewProvider> _viewProvider;
	UIView* _coverView;

}

@property (nonatomic,readonly) id<SXIssueCoverViewProvider> viewProvider;              //@synthesize viewProvider=_viewProvider - In the implementation block
@property (nonatomic,retain) UIView * coverView;                                       //@synthesize coverView=_coverView - In the implementation block
-(void)discardContents;
-(id<SXIssueCoverViewProvider>)viewProvider;
-(void)renderContents;
-(void)presentComponentWithChanges:(SCD_Struct_SX14)arg1 ;
-(UIView *)coverView;
-(void)renderIssueCover;
-(void)setCoverView:(UIView *)arg1 ;
-(id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 viewProvider:(id)arg5 ;
@end

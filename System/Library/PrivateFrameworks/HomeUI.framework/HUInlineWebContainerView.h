/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/WKUIDelegate.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@protocol HUInlineWebContainerViewDelegate;
@class WKWebView, NSString, UIFont, WKUserContentController;

@interface HUInlineWebContainerView : UIView <WKUIDelegate, WKNavigationDelegate> {

	WKWebView* _webView;
	NSString* _HTMLContent;
	UIFont* _font;
	id<HUInlineWebContainerViewDelegate> _delegate;
	double _estimatedHeight;
	WKUserContentController* _contentController;

}

@property (assign,nonatomic) double estimatedHeight;                                            //@synthesize estimatedHeight=_estimatedHeight - In the implementation block
@property (nonatomic,readonly) WKUserContentController * contentController;                     //@synthesize contentController=_contentController - In the implementation block
@property (nonatomic,readonly) WKWebView * webView;                                             //@synthesize webView=_webView - In the implementation block
@property (nonatomic,copy) NSString * HTMLContent;                                              //@synthesize HTMLContent=_HTMLContent - In the implementation block
@property (nonatomic,retain) UIFont * font;                                                     //@synthesize font=_font - In the implementation block
@property (assign,nonatomic,__weak) id<HUInlineWebContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WKWebView *)webView;
-(void)setFont:(UIFont *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)webView:(id)arg1 shouldPreviewElement:(id)arg2 ;
-(id<HUInlineWebContainerViewDelegate>)delegate;
-(UIFont *)font;
-(WKUserContentController *)contentController;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)setDelegate:(id<HUInlineWebContainerViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(double)heightForWidth:(double)arg1 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(double)estimatedHeight;
-(void)setHTMLContent:(NSString *)arg1 ;
-(void)setUserStyleSheet;
-(void)setEstimatedHeight:(double)arg1 ;
-(NSString *)HTMLContent;
@end

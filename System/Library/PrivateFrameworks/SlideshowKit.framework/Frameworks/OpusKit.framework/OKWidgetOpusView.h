/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OpusKit/OKWidgetView.h>

@class NSURL, OKDocument, OKPresentationViewController;

@interface OKWidgetOpusView : OKWidgetView {

	NSURL* _url;
	OKDocument* _document;
	OKPresentationViewController* _presentationViewController;

}
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(BOOL)prepareForDisplay:(BOOL)arg1 ;
-(void)layoutSubviews;
-(id)initWithWidget:(id)arg1 ;
-(void)dealloc;
-(BOOL)prepareForWarmup:(BOOL)arg1 ;
-(BOOL)prepareForUnload:(BOOL)arg1 ;
-(void)setSettingUrl:(id)arg1 ;
-(void)_loadDocumentIfNeeded;
@end


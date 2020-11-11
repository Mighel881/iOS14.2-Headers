/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsArticles/NewsArticles-Structs.h>
#import <Silex/SXComponentView.h>

@interface NewsArticles.AdComponentView : SXComponentView {

	 bannerView;
	 $__lazy_storage_$_debugView;
	 bannerAdFactory;
	 viewManager;
	 requestManager;
	 bannerAdRenderer;
	 integrator;
	 exposureMonitor;
	 tracker;
	 journal;

}
-(void)renderContents;
-(void)presentComponentWithChanges:(SCD_Struct_Ne0)arg1 ;
-(id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 ;
-(void)receivedInfo:(id)arg1 fromLayoutingPhaseWithIdentifier:(id)arg2 ;
-(void)visibilityStateDidChangeFromState:(long long)arg1 ;
@end

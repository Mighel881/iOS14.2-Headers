/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsArticles/NewsArticles-Structs.h>
#import <Silex/SXComponentSizer.h>

@interface NewsArticles.AdComponentSizer : SXComponentSizer {

	 layoutStore;
	 bannerAdLayoutAttributesFactory;
	 bannerAdFactory;
	 $__lazy_storage_$_isVisualDebuggingEnabled;

}
-(double)calculateHeightForWidth:(double)arg1 layoutContext:(id)arg2 ;
-(NSRange)overrideColumnLayoutForColumnRange:(NSRange)arg1 inColumnLayout:(id)arg2 ;
-(unsigned long long)shouldIgnoreMarginsForColumnLayout:(id)arg1 ;
-(unsigned long long)shouldIgnoreViewportPaddingForColumnLayout:(id)arg1 ;
-(BOOL)requiresSizeChangeForStateChange:(id)arg1 fromState:(id)arg2 ;
-(id)initWithComponent:(id)arg1 componentLayout:(id)arg2 componentStyle:(id)arg3 DOMObjectProvider:(id)arg4 layoutOptions:(id)arg5 ;
@end

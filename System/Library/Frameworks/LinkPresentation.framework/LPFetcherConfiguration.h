/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class WKWebView, LPEvent;

@interface LPFetcherConfiguration : NSObject <NSCopying> {

	WKWebView* _webViewForProcessSharing;
	long long _maximumResponseCount;
	LPEvent* _rootEvent;

}

@property (nonatomic,retain) WKWebView * webViewForProcessSharing;              //@synthesize webViewForProcessSharing=_webViewForProcessSharing - In the implementation block
@property (assign,nonatomic) long long maximumResponseCount;                    //@synthesize maximumResponseCount=_maximumResponseCount - In the implementation block
@property (nonatomic,retain) LPEvent * rootEvent;                               //@synthesize rootEvent=_rootEvent - In the implementation block
-(void)setWebViewForProcessSharing:(WKWebView *)arg1 ;
-(LPEvent *)rootEvent;
-(WKWebView *)webViewForProcessSharing;
-(long long)maximumResponseCount;
-(void)setMaximumResponseCount:(long long)arg1 ;
-(void)setRootEvent:(LPEvent *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end


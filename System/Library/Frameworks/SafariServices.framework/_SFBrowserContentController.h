/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class _SFPerSitePreferencesVendor, _SFPageZoomPreferenceManager;


@protocol _SFBrowserContentController <NSObject>
@property (nonatomic,readonly) id<_SFBrowserDocument> activeDocument; 
@property (getter=isShowingReader,nonatomic,readonly) BOOL showingReader; 
@property (assign,nonatomic) BOOL keepBarsMinimized; 
@property (nonatomic,readonly) _SFPerSitePreferencesVendor * perSitePreferencesVendor; 
@property (nonatomic,readonly) _SFPageZoomPreferenceManager * pageZoomManager; 
@property (nonatomic,readonly) BOOL supportsPrivacyReport; 
@required
-(void)toggleShowingReaderForUserAction;
-(void)setKeepBarsMinimized:(BOOL)arg1;
-(_SFPageZoomPreferenceManager *)pageZoomManager;
-(_SFPerSitePreferencesVendor *)perSitePreferencesVendor;
-(BOOL)keepBarsMinimized;
-(BOOL)isShowingReader;
-(id<_SFBrowserDocument>)activeDocument;
-(BOOL)supportsPrivacyReport;

@end

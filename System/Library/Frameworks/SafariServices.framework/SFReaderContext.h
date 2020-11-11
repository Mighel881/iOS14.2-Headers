/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SFReaderContext <NSObject>
@required
-(void)deactivateReaderNow:(unsigned long long)arg1;
-(void)collectReaderContentForMailWithCompletion:(/*^block*/id)arg1;
-(void)clearUnusedReaderResourcesSoon;
-(void)resetReaderTextSize;
-(id)readerURL;
-(void)setReaderFont:(id)arg1;
-(void)checkReaderAvailability;
-(BOOL)canDecreaseReaderTextSize;
-(BOOL)canIncreaseReaderTextSize;
-(id)fontManager;
-(void)stopLoadingNextPage;
-(id)configurationManager;
-(void)activateReader;
-(BOOL)shouldCreateArticleFinder;
-(void)createArticleFinder;
-(void)decreaseReaderTextSize;
-(void)activateFont:(id)arg1;
-(BOOL)isReaderAvailable;
-(id)scrollPositionInformation;
-(void)setReaderLanguageTag:(id)arg1;
-(void)increaseReaderTextSize;
-(void)setReaderTheme:(long long)arg1 forAppearance:(long long)arg2;
-(void)clearReaderWebView;
-(BOOL)isLoadingNextPage;
-(void)clearAvailability;
-(void)loadNewArticle;

@end

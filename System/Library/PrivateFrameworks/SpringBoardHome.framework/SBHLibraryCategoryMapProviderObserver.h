/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 1:45:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SBHLibraryCategoryMapProviderObserver <NSObject>
@optional
-(void)libraryCategoryMapProviderRefreshedButFoundNoChanges:(id)arg1;
-(void)libraryCategoryMapProvider:(id)arg1 failedToRefreshWithError:(id)arg2;
-(void)libraryCategoryMapProvider:(id)arg1 willRefreshWithOptions:(unsigned long long)arg2;

@required
-(void)libraryCategoryMapProvider:(id)arg1 categoryMapWasRefreshed:(unsigned long long)arg2 libraryCategoryMap:(id)arg3;

@end

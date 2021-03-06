/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FPCollectionDataSourceDelegate
@required
-(void)dataSource:(id)arg1 replaceContentsWithItems:(id)arg2 hasMoreChanges:(BOOL)arg3;
-(void)dataSource:(id)arg1 receivedUpdatedItems:(id)arg2 deletedItems:(id)arg3 hasMoreChanges:(BOOL)arg4;
-(void)dataSource:(id)arg1 wasInvalidatedWithError:(id)arg2;
-(BOOL)dataSourceShouldAlwaysReplaceContents:(id)arg1;

@end


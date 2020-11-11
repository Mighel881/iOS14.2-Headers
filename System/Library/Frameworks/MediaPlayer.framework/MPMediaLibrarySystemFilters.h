/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MPMediaLibraryView;

@interface MPMediaLibrarySystemFilters : NSObject {

	MPMediaLibraryView* _libraryView;
	BOOL _shouldExcludePurchaseHistoryContent;

}
+(id)globalSerialQueue;
+(id)systemFiltersPerLibrary;
+(id)filtersForLibrary:(id)arg1 ;
-(void)_updateFilters;
-(void)_cloudLibraryAvailabilityDidChange:(id)arg1 ;
-(id)_initWithLibrary:(id)arg1 ;
-(BOOL)shouldExcludePurchaseHistoryContent;
@end

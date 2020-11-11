/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewController.h>

@class NSArray, NSDictionary;

@interface VUIDebugMetricsArrayViewController : UITableViewController {

	NSArray* _array;
	NSDictionary* _cachedKeysOrder;

}

@property (nonatomic,retain) NSDictionary * cachedKeysOrder;              //@synthesize cachedKeysOrder=_cachedKeysOrder - In the implementation block
@property (nonatomic,retain) NSArray * array;                             //@synthesize array=_array - In the implementation block
-(NSArray *)array;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setObject:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)object;
-(void)setArray:(NSArray *)arg1 ;
-(void)generateCachedKeys;
-(void)setCachedKeysOrder:(NSDictionary *)arg1 ;
-(NSDictionary *)cachedKeysOrder;
@end

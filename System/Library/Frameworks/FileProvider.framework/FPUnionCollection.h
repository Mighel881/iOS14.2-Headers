/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FileProvider/FPItemCollection.h>

@class NSArray;

@interface FPUnionCollection : FPItemCollection {

	NSArray* _collections;

}

@property (nonatomic,retain) NSArray * collections;              //@synthesize collections=_collections - In the implementation block
-(NSArray *)collections;
-(id)description;
-(id)createDataSourceWithSortDescriptors:(id)arg1 ;
-(void)setCollections:(NSArray *)arg1 ;
-(id)initWithCollections:(id)arg1 ;
@end


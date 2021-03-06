/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 1:45:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface SBIconStateFolderPath : NSObject {

	NSMutableArray* _folderNames;
	NSMutableArray* _folderDefaultNames;
	NSMutableArray* _folderUniqueIdentifiers;
	NSMutableArray* _folderPaths;

}

@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(unsigned long long)count;
-(void)enumerateFoldersUsingBlock:(/*^block*/id)arg1 ;
-(void)addFolderWithName:(id)arg1 defaultName:(id)arg2 uniqueIdentifier:(id)arg3 indexPath:(id)arg4 ;
-(id)folderDefaultNameAtIndex:(unsigned long long)arg1 ;
-(id)folderUniqueIdentifierAtIndex:(unsigned long long)arg1 ;
-(id)folderIndexPathAtIndex:(unsigned long long)arg1 ;
-(id)folderNameAtIndex:(unsigned long long)arg1 ;
@end


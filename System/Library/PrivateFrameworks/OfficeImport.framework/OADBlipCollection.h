/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface OADBlipCollection : NSObject {

	NSMutableArray* mBlips;

}

@property (nonatomic,retain) NSMutableArray * blips; 
-(id)init;
-(NSMutableArray *)blips;
-(id)blipAtIndex:(int)arg1 ;
-(unsigned)addBlip:(id)arg1 ;
-(unsigned)blipCount;
-(void)setBlips:(NSMutableArray *)arg1 ;
@end

/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/PQLValuable.h>

@class BRCALRowID, NSString;

@interface BRCItemID_v9 : NSObject <PQLValuable> {

	BRCALRowID* _appLibraryRowID;
	unsigned char _kind;
	unsigned char _uuid[16];

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newFromSqliteValue:(sqlite3_valueRef)arg1 ;
-(id)initWithRootObject:(RootItemObject*)arg1 ;
-(void)sqliteBind:(sqlite3_stmtRef)arg1 index:(int)arg2 ;
-(id)initWithUUID:(const char*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)itemIDString;
-(id)initWithUUIDObject:(UUIDItemObject_OLD*)arg1 ;
-(id)_initAsLibraryRootWithAppLibraryRowID:(id)arg1 enclosureUUID:(id)arg2 ;
@end

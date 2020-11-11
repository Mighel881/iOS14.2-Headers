/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSManagedObject, NSDictionary;

@interface NSMergeConflict : NSObject <NSSecureCoding> {

	id _source;
	id _snapshot1;
	id _snapshot2;
	id _snapshot3;
	unsigned long long _newVersion;
	unsigned long long _oldVersion;

}

@property (retain,readonly) NSManagedObject * sourceObject;                //@synthesize source=_source - In the implementation block
@property (retain,readonly) NSDictionary * objectSnapshot;                 //@synthesize snapshot1=_snapshot1 - In the implementation block
@property (retain,readonly) NSDictionary * cachedSnapshot;                 //@synthesize snapshot2=_snapshot2 - In the implementation block
@property (retain,readonly) NSDictionary * persistedSnapshot;              //@synthesize snapshot3=_snapshot3 - In the implementation block
@property (readonly) unsigned long long newVersionNumber;                  //@synthesize newVersion=_newVersion - In the implementation block
@property (readonly) unsigned long long oldVersionNumber;                  //@synthesize oldVersion=_oldVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)objectForKey:(id)arg1 ;
-(id)init;
-(NSManagedObject *)sourceObject;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_doCleanupForXPCStore:(id)arg1 context:(id)arg2 ;
-(id)description;
-(NSDictionary *)cachedSnapshot;
-(id)ancestorSnapshot;
-(NSDictionary *)objectSnapshot;
-(unsigned long long)oldVersionNumber;
-(id)initWithSource:(id)arg1 newVersion:(unsigned long long)arg2 oldVersion:(unsigned long long)arg3 snapshot1:(id)arg4 snapshot2:(id)arg5 snapshot3:(id)arg6 ;
-(unsigned long long)newVersionNumber;
-(id)initWithSource:(id)arg1 newVersion:(unsigned long long)arg2 oldVersion:(unsigned long long)arg3 cachedSnapshot:(id)arg4 persistedSnapshot:(id)arg5 ;
-(NSDictionary *)persistedSnapshot;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)dealloc;
@end

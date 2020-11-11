/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/LSPlugInQuery.h>

@class NSDictionary, NSArray;

@interface LSPlugInQueryWithQueryDictionary : LSPlugInQuery {

	NSDictionary* _queryDict;
	NSArray* _extensionIdentifiers;
	NSArray* _extensionPointIdentifiers;
	/*^block*/id _filterBlock;

}
+(BOOL)supportsSecureCoding;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)matchesPlugin:(unsigned)arg1 pluginData:(const LSPluginData*)arg2 withDatabase:(id)arg3 ;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_queryDictionary;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithQueryDictionary:(id)arg1 applyFilter:(/*^block*/id)arg2 ;
@end

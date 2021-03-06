/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libnfstorage.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSObject, NSString, PurpleTrustAppletEntity, PurpleTrustClientEntity;

@interface PurpleTrustKeyEntity : NSManagedObject

@property (nonatomic,retain) NSObject * blob; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * uniqueIdentifier; 
@property (assign,nonatomic) int version; 
@property (nonatomic,retain) PurpleTrustAppletEntity * applet; 
@property (nonatomic,retain) PurpleTrustClientEntity * client; 
+(id)fetchRequest;
@end


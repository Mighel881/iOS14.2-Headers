/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TSPersistence/TSPersistence-Structs.h>
@class NSString, NSMutableDictionary;

@interface TSPClassRegistry : NSObject {

	NSString* _name;
	NSMutableDictionary* _registry;
	BOOL _didFinishRegistration;

}
-(id)init;
-(id)initWithName:(id)arg1 ;
-(void)registerClass:(Class)arg1 forExtensionNumber:(int)arg2 ;
-(Class)classForMessage:(const Message*)arg1 ;
-(Class)p_classForExtensionNumber:(int)arg1 ;
-(Class)classForExtensionNumber:(int)arg1 ;
@end


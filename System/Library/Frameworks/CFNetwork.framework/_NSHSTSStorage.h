/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CFNetwork/CFNetwork-Structs.h>
@class NSURL;

@interface _NSHSTSStorage : NSObject {

	CFHSTSPolicyRef _policy;

}

@property (readonly) CFHSTSPolicyRef _policyRef; 
@property (nonatomic,readonly) NSURL * path; 
+(id)sharedPersistentStore;
-(CFHSTSPolicyRef)_policyRef;
-(BOOL)shouldPromoteHostToHTTPS:(id)arg1 ;
-(id)nonPreloadedHosts;
-(void)resetHSTSForHost:(id)arg1 ;
-(void)resetHSTSHostsSinceDate:(id)arg1 ;
-(id)initPersistentStoreWithURL:(id)arg1 ;
-(id)initInMemoryStore;
-(NSURL *)path;
-(void)dealloc;
@end


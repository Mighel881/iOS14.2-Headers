/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssertionServices/AssertionServices-Structs.h>
#import <libobjc.A.dylib/RBSAssertionObserving.h>

@class RBSAssertion, RBSTarget, NSMutableArray, NSString;

@interface BKSAssertion : NSObject <RBSAssertionObserving> {

	RBSAssertion* _internalAssertion;
	/*^block*/id _acquisitionHandler;
	/*^block*/id _invalidationHandler;
	RBSTarget* _target;
	NSMutableArray* _attributes;
	NSString* _name;
	os_unfair_lock_s _lock;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,readonly) BOOL valid; 
@property (nonatomic,copy) id invalidationHandler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)valid;
-(void)_lock_setInternalAssertion:(id)arg1 ;
-(id)_lock_internalAssertion;
-(/*^block*/id)_acquisitionHandler;
-(id)_lock_name;
-(void)assertion:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(void)_lock_reaquireAssertion;
-(void)_lock:(/*^block*/id)arg1 ;
-(id)_target;
-(id)init;
-(void)_acquireAsynchronously;
-(id)_attributes;
-(void)_invalidateSynchronously:(BOOL)arg1 ;
-(void)assertionWillInvalidate:(id)arg1 ;
-(void)_setTarget:(id)arg1 ;
-(void)_setAttributes:(id)arg1 ;
-(id)_lock_attributes;
-(id)_initWithName:(id)arg1 handler:(/*^block*/id)arg2 ;
-(unsigned long long)_bksErrorForRBSAssertionError:(unsigned long long)arg1 ;
-(void)_lock_setAttributes:(id)arg1 ;
-(void)_lock_setName:(id)arg1 ;
-(id)_internalAssertion;
-(/*^block*/id)_lock_acquisitionHandler;
-(id)invalidationHandler;
-(BOOL)acquire;
-(NSString *)name;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)invalidate;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
@end
